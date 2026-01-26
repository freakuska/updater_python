/* Generated code for Python module 'ui$main_window'
 * created by Nuitka version 2.8.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_ui$main_window" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_ui$main_window;
PyDictObject *moduledict_ui$main_window;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[237];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[237];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("ui.main_window"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 237; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_ui$main_window(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 237; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_ui$$36$main_window$BkrConnector(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[119]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[119]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[119], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[119]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[119], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[119]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[119]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[119]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$FirmwareInfo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[146]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[146]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[146], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[146]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[146], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[146]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[146]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[146]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$FirmwareUpdaterService(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[171]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[171]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[171], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[171]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[171], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[171]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[171]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[171]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$Path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[149]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[149]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[149], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[149]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[149], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[149]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[149]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[149]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[236]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[236]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[236], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[236]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[236], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[236]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[236]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[236]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[121]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[121]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[121], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[121]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[121], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[121]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[121]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[121]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$filedialog(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[142]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[142]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[142], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[142]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[142], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[142]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[142]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[142]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$logging(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[182]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[182]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[182], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[182]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[182], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[182]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[182]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[182]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$messagebox(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[138]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[138]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[138], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[138]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[138], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[138]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[138]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[138]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$queue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[18]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[18]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[18], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[18]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[18], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[18]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[18]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[18]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[113]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[113]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[113], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[113]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[113], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[113]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[113]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[113]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$tk(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[7]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[7]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[7]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[7]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[7]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[7]);
    }

    return result;
}

static PyObject *module_var_accessor_ui$$36$main_window$ttk(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ui$main_window->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ui$main_window->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[35]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ui$main_window->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[35]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[35], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[35]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[35], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[35]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[35]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[35]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5b7101810b02a64e31b1823e5e18fd2e;
static PyCodeObject *code_objects_41f75e12844bd070154324abbcd8f2ee;
static PyCodeObject *code_objects_0ce61fea68c9d0947520621054d030ed;
static PyCodeObject *code_objects_82b7c0eacb5c7296a1856eeb85564b3c;
static PyCodeObject *code_objects_a3a18ba7ad3837c11afb4086d2c496fb;
static PyCodeObject *code_objects_6179ed558b9c9881e0139966b9610b2f;
static PyCodeObject *code_objects_4db452eaefcfc3abb97762cd712334e3;
static PyCodeObject *code_objects_f81e298cb2e41642fd1567c1acd90bd7;
static PyCodeObject *code_objects_6991a6dd79d6eaed752f529594d64bb9;
static PyCodeObject *code_objects_292ac5fba77d113af7703d51b88f8ff6;
static PyCodeObject *code_objects_df7ec481cfc37e5d6d6f8da2ab21c31e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[222]); CHECK_OBJECT(module_filename_obj);
    code_objects_5b7101810b02a64e31b1823e5e18fd2e = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[223], mod_consts[223], NULL, NULL, 0, 0, 0);
    code_objects_41f75e12844bd070154324abbcd8f2ee = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[211], mod_consts[212], mod_consts[224], NULL, 2, 0, 0);
    code_objects_0ce61fea68c9d0947520621054d030ed = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[216], mod_consts[225], NULL, 1, 0, 0);
    code_objects_82b7c0eacb5c7296a1856eeb85564b3c = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[22], mod_consts[214], mod_consts[226], NULL, 1, 0, 0);
    code_objects_a3a18ba7ad3837c11afb4086d2c496fb = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[99], mod_consts[215], mod_consts[227], NULL, 2, 0, 0);
    code_objects_6179ed558b9c9881e0139966b9610b2f = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[89], mod_consts[217], mod_consts[228], NULL, 1, 0, 0);
    code_objects_4db452eaefcfc3abb97762cd712334e3 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[218], mod_consts[229], NULL, 1, 0, 0);
    code_objects_f81e298cb2e41642fd1567c1acd90bd7 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[112], mod_consts[230], mod_consts[231], 0, 0, 0);
    code_objects_6991a6dd79d6eaed752f529594d64bb9 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[213], mod_consts[232], NULL, 1, 0, 0);
    code_objects_292ac5fba77d113af7703d51b88f8ff6 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[221], mod_consts[221], mod_consts[233], NULL, 1, 0, 0);
    code_objects_df7ec481cfc37e5d6d6f8da2ab21c31e = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[168], mod_consts[169], mod_consts[234], mod_consts[235], 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__2_process_log_queue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__3__create_widgets(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__4__log(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__5__connect_bkr(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__6__select_firmware(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__7__start_update(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__8_setup_logger(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_ui$main_window$$36$$$36$$$36$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_root = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_41f75e12844bd070154324abbcd8f2ee, module_ui$main_window, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__ = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_root);
        tmp_assattr_value_1 = par_root;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 18;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts[2]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 19;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[4], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 20;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_2,
            mod_consts[5],
            &PyTuple_GET_ITEM(mod_consts[6], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_5 = module_var_accessor_ui$$36$main_window$tk(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 23;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[9], 0), mod_consts[10]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_6 = module_var_accessor_ui$$36$main_window$tk(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 24;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[12], 0), mod_consts[10]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[13], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_7 = module_var_accessor_ui$$36$main_window$tk(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[8]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 25;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[10]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[15], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[16], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = MAKE_LIST_EMPTY(tstate, 0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[17], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_assattr_target_7;
        tmp_called_instance_3 = module_var_accessor_ui$$36$main_window$queue(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 30;
        tmp_assattr_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[19]);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[20], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 31;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[21]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 34;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[22]);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__,
        type_description_1,
        par_self,
        par_root
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__ == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__ = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__1___init__);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_root);
    Py_DECREF(par_root);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_root);
    Py_DECREF(par_root);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ui$main_window$$36$$$36$$$36$function__2_process_log_queue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue = MAKE_FUNCTION_FRAME(tstate, code_objects_6991a6dd79d6eaed752f529594d64bb9, module_ui$main_window, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 41;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue->m_frame.f_lineno = 41;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[24]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 42;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[26]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[27];
        CHECK_OBJECT(var_message);
        tmp_add_expr_left_1 = var_message;
        tmp_add_expr_right_1 = mod_consts[28];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 42;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 43;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue->m_frame.f_lineno = 43;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 40;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_expression_value_5 = module_var_accessor_ui$$36$main_window$queue(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 44;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[31]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 39;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue->m_frame)) {
            frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_no_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[0]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[32]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[33];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[21]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue,
        type_description_1,
        par_self,
        var_message
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__2_process_log_queue);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_message);
    var_message = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_message);
    var_message = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ui$main_window$$36$$$36$$$36$function__3__create_widgets(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_frame_connect = NULL;
    PyObject *var_frame_lsr = NULL;
    PyObject *var_scrollbar = NULL;
    PyObject *var_frame_firmware = NULL;
    PyObject *var_frame_logs = NULL;
    PyObject *var_scrollbar_logs = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets = MAKE_FUNCTION_FRAME(tstate, code_objects_82b7c0eacb5c7296a1856eeb85564b3c, module_ui$main_window, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[36]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[37]);
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 55;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame_connect == NULL);
        var_frame_connect = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_frame_connect);
        tmp_expression_value_3 = var_frame_connect;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 56;
        tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[39], 0), mod_consts[40]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_call_result_2;
        tmp_expression_value_5 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[41]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_connect);
        tmp_tuple_element_2 = var_frame_connect;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[42]);
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 59;
        tmp_expression_value_4 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[43]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 59;
        tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[44], 0), mod_consts[45]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_call_result_3;
        tmp_expression_value_7 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[46]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_connect);
        tmp_kw_call_arg_value_0_1 = var_frame_connect;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[11]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[47];
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 60;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts[48]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[43]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 60;
        tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[49], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        PyObject *tmp_call_result_4;
        tmp_expression_value_10 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[41]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_connect);
        tmp_tuple_element_3 = var_frame_connect;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts[51]);
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 63;
        tmp_expression_value_9 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[43]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 63;
        tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[45]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_call_result_5;
        tmp_expression_value_12 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[46]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_connect);
        tmp_kw_call_arg_value_0_2 = var_frame_connect;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[13]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_2 = mod_consts[53];
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 64;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_expression_value_11 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[48]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[43]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 64;
        tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[54], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_6;
        tmp_expression_value_15 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[55]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_connect);
        tmp_kw_call_arg_value_0_3 = var_frame_connect;
        tmp_kw_call_dict_value_0_3 = mod_consts[56];
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_kw_call_dict_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[57]);
        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 67;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_expression_value_14 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[43]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 67;
        tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_frame_connect);
        tmp_expression_value_17 = var_frame_connect;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[61]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 70;
        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[63]);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kwargs_value_4;
        tmp_expression_value_18 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[36]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[0]);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts[64]);
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 73;
        tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame_lsr == NULL);
        var_frame_lsr = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(var_frame_lsr);
        tmp_expression_value_20 = var_frame_lsr;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[38]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 74;
        tmp_call_result_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[66]);
        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_lsr);
        tmp_args_element_value_1 = var_frame_lsr;
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 78;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[67], tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scrollbar == NULL);
        var_scrollbar = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_scrollbar);
        tmp_expression_value_21 = var_scrollbar;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[38]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 79;
        tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[68], 0), mod_consts[69]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_kw_call_dict_value_1_4;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_22 = module_var_accessor_ui$$36$main_window$tk(tstate);
        if (unlikely(tmp_expression_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[70]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_lsr);
        tmp_kw_call_arg_value_0_4 = var_frame_lsr;
        CHECK_OBJECT(var_scrollbar);
        tmp_expression_value_23 = var_scrollbar;
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[71]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_4 = mod_consts[53];
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 83;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_17, args, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[73], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[73]);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[38]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 84;
        tmp_call_result_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[74], 0), mod_consts[75]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(var_scrollbar);
        tmp_expression_value_26 = var_scrollbar;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[76]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[73]);
        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[77]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 85;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_11 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_19, kw_values, mod_consts[78]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kwargs_value_5;
        tmp_expression_value_29 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[36]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_30 = par_self;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[0]);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM(tmp_args_value_5, 0, tmp_tuple_element_5);
        tmp_kwargs_value_5 = DICT_COPY(tstate, mod_consts[79]);
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 89;
        tmp_assign_source_4 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame_firmware == NULL);
        var_frame_firmware = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(var_frame_firmware);
        tmp_expression_value_31 = var_frame_firmware;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[38]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 90;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 90;
        tmp_call_result_12 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[39], 0), mod_consts[40]);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 90;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_6;
        PyObject *tmp_call_result_13;
        tmp_expression_value_33 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[41]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_firmware);
        tmp_tuple_element_6 = var_frame_firmware;
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
        tmp_kwargs_value_6 = DICT_COPY(tstate, mod_consts[80]);
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 93;
        tmp_expression_value_32 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[38]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 93;
        tmp_call_result_13 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[81], 0), mod_consts[82]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_kw_call_dict_value_1_5;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_call_result_14;
        tmp_expression_value_35 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[46]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_firmware);
        tmp_kw_call_arg_value_0_5 = var_frame_firmware;
        CHECK_OBJECT(par_self);
        tmp_expression_value_36 = par_self;
        tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[15]);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_5 = mod_consts[83];
        tmp_kw_call_dict_value_2_1 = mod_consts[84];
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 94;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5, tmp_kw_call_dict_value_2_1};
            tmp_expression_value_34 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_25, args, kw_values, mod_consts[85]);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[38]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 94;
        tmp_call_result_14 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[86], 0), mod_consts[87]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_kw_call_dict_value_1_6;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_15;
        tmp_expression_value_38 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[55]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_firmware);
        tmp_kw_call_arg_value_0_6 = var_frame_firmware;
        tmp_kw_call_dict_value_0_6 = mod_consts[88];
        CHECK_OBJECT(par_self);
        tmp_expression_value_39 = par_self;
        tmp_kw_call_dict_value_1_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[89]);
        if (tmp_kw_call_dict_value_1_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 95;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_6, tmp_kw_call_dict_value_1_6};
            tmp_expression_value_37 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_27, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_kw_call_dict_value_1_6);
        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[38]);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 95;
        tmp_call_result_15 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[90], 0), mod_consts[91]);
        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_kw_call_dict_value_0_7;
        PyObject *tmp_kw_call_dict_value_1_7;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_16;
        tmp_expression_value_41 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[55]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_42 = par_self;
        tmp_kw_call_arg_value_0_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[0]);
        if (tmp_kw_call_arg_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_7 = mod_consts[92];
        CHECK_OBJECT(par_self);
        tmp_expression_value_43 = par_self;
        tmp_kw_call_dict_value_1_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[93]);
        if (tmp_kw_call_dict_value_1_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_7);

            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 99;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_7};
            tmp_expression_value_40 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_29, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_kw_call_arg_value_0_7);
        Py_DECREF(tmp_kw_call_dict_value_1_7);
        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[38]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 99;
        tmp_call_result_16 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[94], 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_kwargs_value_7;
        tmp_expression_value_44 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_expression_value_44 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[36]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_45 = par_self;
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[0]);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM(tmp_args_value_7, 0, tmp_tuple_element_7);
        tmp_kwargs_value_7 = DICT_COPY(tstate, mod_consts[96]);
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 103;
        tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_value_7);
        Py_DECREF(tmp_kwargs_value_7);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame_logs == NULL);
        var_frame_logs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(var_frame_logs);
        tmp_expression_value_46 = var_frame_logs;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[38]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 104;
        tmp_call_result_17 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[66]);
        Py_DECREF(tmp_called_value_31);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = module_var_accessor_ui$$36$main_window$ttk(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_logs);
        tmp_args_element_value_2 = var_frame_logs;
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 107;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[67], tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scrollbar_logs == NULL);
        var_scrollbar_logs = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(var_scrollbar_logs);
        tmp_expression_value_47 = var_scrollbar_logs;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[38]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 108;
        tmp_call_result_18 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[68], 0), mod_consts[69]);
        Py_DECREF(tmp_called_value_32);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_kw_call_dict_value_1_8;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_48 = module_var_accessor_ui$$36$main_window$tk(tstate);
        if (unlikely(tmp_expression_value_48 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[97]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_logs);
        tmp_kw_call_arg_value_0_8 = var_frame_logs;
        tmp_kw_call_dict_value_0_8 = mod_consts[53];
        CHECK_OBJECT(var_scrollbar_logs);
        tmp_expression_value_49 = var_scrollbar_logs;
        tmp_kw_call_dict_value_1_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[71]);
        if (tmp_kw_call_dict_value_1_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 111;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_8};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_33, args, kw_values, mod_consts[98]);
        }

        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_kw_call_dict_value_1_8);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[25], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(par_self);
        tmp_expression_value_51 = par_self;
        tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[25]);
        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[38]);
        Py_DECREF(tmp_expression_value_50);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 112;
        tmp_call_result_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_34, &PyTuple_GET_ITEM(mod_consts[74], 0), mod_consts[75]);
        Py_DECREF(tmp_called_value_34);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_20;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(var_scrollbar_logs);
        tmp_expression_value_52 = var_scrollbar_logs;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[76]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_54 = par_self;
        tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[25]);
        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 113;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[77]);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 113;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 113;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_call_result_20 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_35, kw_values, mod_consts[78]);
        }

        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_21;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame.f_lineno = 116;
        tmp_call_result_21 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[99],
            PyTuple_GET_ITEM(mod_consts[100], 0)
        );

        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets,
        type_description_1,
        par_self,
        var_frame_connect,
        var_frame_lsr,
        var_scrollbar,
        var_frame_firmware,
        var_frame_logs,
        var_scrollbar_logs
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__3__create_widgets);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_frame_connect);
    Py_DECREF(var_frame_connect);
    var_frame_connect = NULL;
    CHECK_OBJECT(var_frame_lsr);
    Py_DECREF(var_frame_lsr);
    var_frame_lsr = NULL;
    CHECK_OBJECT(var_scrollbar);
    Py_DECREF(var_scrollbar);
    var_scrollbar = NULL;
    CHECK_OBJECT(var_frame_firmware);
    Py_DECREF(var_frame_firmware);
    var_frame_firmware = NULL;
    CHECK_OBJECT(var_frame_logs);
    Py_DECREF(var_frame_logs);
    var_frame_logs = NULL;
    CHECK_OBJECT(var_scrollbar_logs);
    Py_DECREF(var_scrollbar_logs);
    var_scrollbar_logs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_frame_connect);
    var_frame_connect = NULL;
    Py_XDECREF(var_frame_lsr);
    var_frame_lsr = NULL;
    Py_XDECREF(var_scrollbar);
    var_scrollbar = NULL;
    Py_XDECREF(var_frame_firmware);
    var_frame_firmware = NULL;
    Py_XDECREF(var_frame_logs);
    var_frame_logs = NULL;
    Py_XDECREF(var_scrollbar_logs);
    var_scrollbar_logs = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ui$main_window$$36$$$36$$$36$function__4__log(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    PyObject *var_f = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__4__log;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log = MAKE_FUNCTION_FRAME(tstate, code_objects_a3a18ba7ad3837c11afb4086d2c496fb, module_ui$main_window, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__4__log = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__4__log);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__4__log) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame.f_lineno = 124;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[101], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        PyObject *tmp_open_encoding_1;
        tmp_open_filename_1 = mod_consts[102];
        tmp_open_mode_1 = mod_consts[103];
        tmp_open_encoding_1 = mod_consts[104];
        tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[105]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame.f_lineno = 129;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[106]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_f = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_f);
        tmp_expression_value_4 = var_f;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[107]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_message);
        tmp_add_expr_left_1 = par_message;
        tmp_add_expr_right_1 = mod_consts[28];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 130;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame.f_lineno = 130;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__4__log, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__4__log, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(tstate);
        tmp_args_element_value_4 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_4); 
        tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
        if (tmp_args_element_value_5 == NULL) {
            tmp_args_element_value_5 = Py_None;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto try_except_handler_6;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 129;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame)) {
            frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooo";
    goto try_except_handler_6;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 129;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame)) {
            frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooo";
    goto try_except_handler_6;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame.f_lineno = 129;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts[108]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

            exception_lineno = 129;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame.f_lineno = 129;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts[108]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_5);
    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__4__log, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__4__log->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__4__log, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__4__log,
        type_description_1,
        par_self,
        par_message,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__4__log == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__4__log = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__4__log);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_f);
    var_f = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ui$main_window$$36$$$36$$$36$function__5__connect_bkr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_connect_thread = NULL;
    PyObject *var_thread = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr = MAKE_FUNCTION_FRAME(tstate, code_objects_0ce61fea68c9d0947520621054d030ed, module_ui$main_window, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_called_instance_1 = Nuitka_Cell_GET(par_self);
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr->m_frame.f_lineno = 137;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[99],
            PyTuple_GET_ITEM(mod_consts[110], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread(tstate, tmp_closure_1);

        assert(var_connect_thread == NULL);
        var_connect_thread = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_1 = module_var_accessor_ui$$36$main_window$threading(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[113]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 175;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[114]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_connect_thread);
        tmp_kw_call_value_0_1 = var_connect_thread;
        tmp_kw_call_value_1_1 = Py_True;
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr->m_frame.f_lineno = 175;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[115]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        assert(var_thread == NULL);
        var_thread = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_thread);
        tmp_called_instance_2 = var_thread;
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr->m_frame.f_lineno = 176;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[116]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 176;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr,
        type_description_1,
        par_self,
        var_connect_thread,
        var_thread
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_connect_thread);
    Py_DECREF(var_connect_thread);
    var_connect_thread = NULL;
    CHECK_OBJECT(var_thread);
    Py_DECREF(var_thread);
    var_thread = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_connect_thread);
    var_connect_thread = NULL;
    Py_XDECREF(var_thread);
    var_thread = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_ip = NULL;
    PyObject *var_port = NULL;
    PyObject *var_connector = NULL;
    PyObject *var_i = NULL;
    PyObject *var_lsr = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread = MAKE_FUNCTION_FRAME(tstate, code_objects_f81e298cb2e41642fd1567c1acd90bd7, module_ui$main_window, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 142;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[118]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 142;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        assert(var_ip == NULL);
        var_ip = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[13]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[118]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 143;
        tmp_int_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        assert(var_port == NULL);
        var_port = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = module_var_accessor_ui$$36$main_window$BkrConnector(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[119]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 146;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ip);
        tmp_args_element_value_1 = var_ip;
        CHECK_OBJECT(var_port);
        tmp_args_element_value_2 = var_port;
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        assert(var_connector == NULL);
        var_connector = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_connector);
        tmp_expression_value_5 = var_connector;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[120]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[99]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 149;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 149;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_7 = module_var_accessor_ui$$36$main_window$asyncio(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[121]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 152;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[122]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_connector);
        tmp_called_instance_1 = var_connector;
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 152;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[123]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 152;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 152;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[73]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 156;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 156;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_2,
            mod_consts[124],
            &PyTuple_GET_ITEM(mod_consts[125], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 156;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        tmp_called_value_6 = (PyObject *)&PyEnum_Type;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[17]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 157;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 157;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 157;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 157;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooc";
                exception_lineno = 157;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 157;
            type_description_1 = "ooooooc";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 157;
            type_description_1 = "ooooooc";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 157;
            type_description_1 = "ooooooc";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 157;
            type_description_1 = "ooooooc";
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_9;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_lsr;
            var_lsr = tmp_assign_source_10;
            Py_INCREF(var_lsr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_format_spec_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 158;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[73]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 158;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[26]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 158;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_args_element_value_6 = mod_consts[27];
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_1 = var_i;
        tmp_add_expr_right_1 = const_int_pos_1;
        tmp_format_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_format_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 158;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_format_spec_1 = mod_consts[126];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 158;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[127];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_lsr);
            tmp_expression_value_12 = var_lsr;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[128]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 158;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[126];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 158;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[129];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(var_lsr);
            tmp_expression_value_13 = var_lsr;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[130]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 158;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[126];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 158;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[131];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(var_lsr);
            tmp_expression_value_14 = var_lsr;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[132]);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 158;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[126];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 158;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_7 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 158;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 158;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 157;
        type_description_1 = "ooooooc";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[99]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[133];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 161;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_2;
            }

            tmp_expression_value_16 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[17]);
            if (tmp_len_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_2;
            }
            tmp_format_value_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
            Py_DECREF(tmp_len_arg_1);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_5 = mod_consts[126];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[134];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_8 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 161;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 161;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_17 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[17]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 165;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 165;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_18 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[73]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 166;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[135],
            PyTuple_GET_ITEM(mod_consts[136], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_20 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[17]);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 167;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 167;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[16], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 167;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread, exception_keeper_lineno_4);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
        } else if (exception_keeper_lineno_4 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread, exception_keeper_lineno_4);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_11); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_e = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooc";
            goto try_except_handler_7;
        }

        tmp_expression_value_21 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[99]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "ooooooc";
            goto try_except_handler_7;
        }
        tmp_tuple_element_3 = mod_consts[137];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_e);
            tmp_unicode_arg_1 = var_e;
            tmp_format_value_6 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_format_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 171;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_6 = mod_consts[126];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 171;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 171;
            type_description_1 = "ooooooc";
            goto try_except_handler_7;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 171;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "ooooooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_22 = module_var_accessor_ui$$36$main_window$messagebox(tstate);
        if (unlikely(tmp_expression_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 172;
            type_description_1 = "ooooooc";
            goto try_except_handler_7;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[139]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 172;
            type_description_1 = "ooooooc";
            goto try_except_handler_7;
        }
        tmp_args_element_value_10 = mod_consts[140];
        tmp_tuple_element_4 = mod_consts[141];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_unicode_arg_2;
            PyObject *tmp_format_spec_7;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_e);
            tmp_unicode_arg_2 = var_e;
            tmp_format_value_7 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
            if (tmp_format_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 172;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_7 = mod_consts[126];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 172;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_11 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 172;
            type_description_1 = "ooooooc";
            goto try_except_handler_7;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 172;
            type_description_1 = "ooooooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 141;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame)) {
            frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooooooc";
    goto try_except_handler_6;
    branch_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread,
        type_description_1,
        var_ip,
        var_port,
        var_connector,
        var_i,
        var_lsr,
        var_e,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ip);
    var_ip = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_connector);
    var_connector = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_lsr);
    var_lsr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_ip);
    var_ip = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_connector);
    var_connector = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_lsr);
    var_lsr = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ui$main_window$$36$$$36$$$36$function__6__select_firmware(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_filepath = NULL;
    PyObject *var_firmware = NULL;
    PyObject *var_is_valid = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware = MAKE_FUNCTION_FRAME(tstate, code_objects_6179ed558b9c9881e0139966b9610b2f, module_ui$main_window, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_args_kw_split_1;
        tmp_expression_value_1 = module_var_accessor_ui$$36$main_window$filedialog(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[143]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_args_kw_split_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[144], "il");
        frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = 181;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_kw_split_1, 0), mod_consts[145]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_kw_split_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_filepath == NULL);
        var_filepath = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_filepath);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_filepath);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 187;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 188;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_filepath);
        tmp_args_element_value_1 = var_filepath;
        frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = 188;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[71], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 188;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = module_var_accessor_ui$$36$main_window$FirmwareInfo(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[146]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 193;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_filepath);
        tmp_args_element_value_2 = var_filepath;
        frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = 193;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 193;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_firmware == NULL);
        var_firmware = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_firmware);
        tmp_called_instance_2 = var_firmware;
        frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = 194;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[147]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 194;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 194;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 194;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_is_valid == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_is_valid = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_msg == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_msg = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_is_valid);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_is_valid);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[99]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[148];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_called_value_4 = module_var_accessor_ui$$36$main_window$Path(tstate);
            if (unlikely(tmp_called_value_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[149]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 198;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_filepath);
            tmp_args_element_value_4 = var_filepath;
            frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = 198;
            tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 198;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[150]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 198;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[126];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 198;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[129];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_firmware);
            tmp_expression_value_5 = var_firmware;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[151]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 198;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[126];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 198;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[152];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = 198;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[99]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[153];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_msg);
            tmp_format_value_3 = var_msg;
            tmp_format_spec_3 = mod_consts[126];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 200;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_5 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = 200;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_3 = module_var_accessor_ui$$36$main_window$messagebox(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_6 = mod_consts[140];
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_7 = var_msg;
        frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_3,
                mod_consts[139],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware, exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
        } else if (exception_keeper_lineno_3 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware, exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_8); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_e = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[99]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_3 = mod_consts[154];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_e);
            tmp_unicode_arg_1 = var_e;
            tmp_format_value_4 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 203;
                type_description_1 = "oooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_4 = mod_consts[126];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 203;
                type_description_1 = "oooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_8 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = 203;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 192;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame)) {
            frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooo";
    goto try_except_handler_5;
    branch_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware,
        type_description_1,
        par_self,
        var_filepath,
        var_firmware,
        var_is_valid,
        var_msg,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__6__select_firmware);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_filepath);
    Py_DECREF(var_filepath);
    var_filepath = NULL;
    Py_XDECREF(var_firmware);
    var_firmware = NULL;
    Py_XDECREF(var_is_valid);
    var_is_valid = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_filepath);
    var_filepath = NULL;
    Py_XDECREF(var_firmware);
    var_firmware = NULL;
    Py_XDECREF(var_is_valid);
    var_is_valid = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ui$main_window$$36$$$36$$$36$function__7__start_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_selection = NULL;
    struct Nuitka_CellObject *var_selected_lsr = Nuitka_Cell_NewEmpty();
    PyObject *var_result = NULL;
    PyObject *var_update_thread = NULL;
    PyObject *var_thread = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update = MAKE_FUNCTION_FRAME(tstate, code_objects_4db452eaefcfc3abb97762cd712334e3, module_ui$main_window, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[118]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame.f_lineno = 211;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = module_var_accessor_ui$$36$main_window$messagebox(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 212;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame.f_lineno = 212;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_1,
            mod_consts[156],
            &PyTuple_GET_ITEM(mod_consts[157], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[17]);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 216;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 216;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = module_var_accessor_ui$$36$main_window$messagebox(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 217;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame.f_lineno = 217;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_2,
            mod_consts[156],
            &PyTuple_GET_ITEM(mod_consts[158], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[73]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame.f_lineno = 222;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[159]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        assert(var_selection == NULL);
        var_selection = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_selection);
        tmp_operand_value_3 = var_selection;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        tmp_called_instance_4 = module_var_accessor_ui$$36$main_window$messagebox(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 224;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame.f_lineno = 224;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_4,
            mod_consts[156],
            &PyTuple_GET_ITEM(mod_consts[160], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[17]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 228;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_selection);
        tmp_expression_value_7 = var_selection;
        tmp_subscript_value_2 = const_int_0;
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_expression_value_5);

            exception_lineno = 228;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 228;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_selected_lsr) == NULL);
        Nuitka_Cell_SET(var_selected_lsr, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_8 = module_var_accessor_ui$$36$main_window$messagebox(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 232;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[161]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[162];
        tmp_tuple_element_1 = mod_consts[163];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 6);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(var_selected_lsr));
            tmp_expression_value_9 = Nuitka_Cell_GET(var_selected_lsr);
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[128]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 234;
                type_description_1 = "cocooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[126];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 234;
                type_description_1 = "cocooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[164];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(var_selected_lsr));
            tmp_expression_value_10 = Nuitka_Cell_GET(var_selected_lsr);
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[130]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 235;
                type_description_1 = "cocooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[126];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 235;
                type_description_1 = "cocooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[165];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(var_selected_lsr));
            tmp_expression_value_11 = Nuitka_Cell_GET(var_selected_lsr);
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[132]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 236;
                type_description_1 = "cocooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[126];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 236;
                type_description_1 = "cocooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_2 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 236;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_4;
        CHECK_OBJECT(var_result);
        tmp_operand_value_4 = var_result;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_self);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[99]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 244;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[166];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(Nuitka_Cell_GET(var_selected_lsr));
            tmp_expression_value_13 = Nuitka_Cell_GET(var_selected_lsr);
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[128]);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 244;
                type_description_1 = "cocooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_4 = mod_consts[126];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 244;
                type_description_1 = "cocooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[167];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 244;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame.f_lineno = 244;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 244;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var_selected_lsr;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_4 = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread(tstate, tmp_closure_1);

        assert(var_update_thread == NULL);
        var_update_thread = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_14 = module_var_accessor_ui$$36$main_window$threading(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[113]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 277;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[114]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 277;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_update_thread);
        tmp_kw_call_value_0_1 = var_update_thread;
        tmp_kw_call_value_1_1 = Py_True;
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame.f_lineno = 277;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[115]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 277;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        assert(var_thread == NULL);
        var_thread = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_thread);
        tmp_called_instance_5 = var_thread;
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame.f_lineno = 278;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[116]);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 278;
            type_description_1 = "cocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update,
        type_description_1,
        par_self,
        var_selection,
        var_selected_lsr,
        var_result,
        var_update_thread,
        var_thread
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_selection);
    var_selection = NULL;
    CHECK_OBJECT(var_selected_lsr);
    Py_DECREF(var_selected_lsr);
    var_selected_lsr = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_update_thread);
    var_update_thread = NULL;
    Py_XDECREF(var_thread);
    var_thread = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_selection);
    var_selection = NULL;
    CHECK_OBJECT(var_selected_lsr);
    Py_DECREF(var_selected_lsr);
    var_selected_lsr = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_update_thread);
    var_update_thread = NULL;
    Py_XDECREF(var_thread);
    var_thread = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_ip = NULL;
    PyObject *var_port = NULL;
    PyObject *var_firmware_path = NULL;
    PyObject *var_updater = NULL;
    PyObject *var_success = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread = MAKE_FUNCTION_FRAME(tstate, code_objects_df7ec481cfc37e5d6d6f8da2ab21c31e, module_ui$main_window, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 249;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[118]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 249;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 249;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 249;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        assert(var_ip == NULL);
        var_ip = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[13]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 250;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[118]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 250;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 250;
        tmp_int_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 250;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 250;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        assert(var_port == NULL);
        var_port = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 251;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[15]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 251;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[118]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 251;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 251;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 251;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        assert(var_firmware_path == NULL);
        var_firmware_path = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = module_var_accessor_ui$$36$main_window$FirmwareUpdaterService(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[171]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 254;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ip);
        tmp_args_element_value_1 = var_ip;
        CHECK_OBJECT(var_port);
        tmp_args_element_value_2 = var_port;
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 254;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        assert(var_updater == NULL);
        var_updater = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_updater);
        tmp_expression_value_7 = var_updater;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[120]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 258;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 258;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[99]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 258;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 258;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 258;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_9 = module_var_accessor_ui$$36$main_window$asyncio(tstate);
        if (unlikely(tmp_expression_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[121]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 261;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[122]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 261;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_updater);
        tmp_expression_value_10 = var_updater;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[172]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 261;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[16]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 261;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_firmware_path);
        tmp_args_element_value_6 = var_firmware_path;
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 261;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 261;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 261;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_success);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_success);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 264;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 265;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 265;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[99],
            PyTuple_GET_ITEM(mod_consts[173], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 265;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_11 = module_var_accessor_ui$$36$main_window$messagebox(tstate);
        if (unlikely(tmp_expression_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 266;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[174]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_7 = mod_consts[175];
        tmp_tuple_element_1 = mod_consts[176];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[16]);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 266;
                type_description_1 = "oooooocc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_12 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[128]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 266;
                type_description_1 = "oooooocc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[126];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 266;
                type_description_1 = "oooooocc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[177];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_8 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 266;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 268;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 268;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[99],
            PyTuple_GET_ITEM(mod_consts[178], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 268;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_5;
        tmp_called_instance_3 = module_var_accessor_ui$$36$main_window$messagebox(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 269;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 269;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_3,
            mod_consts[139],
            &PyTuple_GET_ITEM(mod_consts[179], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 269;
            type_description_1 = "oooooocc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_6); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_e = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[23]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 273;
            type_description_1 = "oooooocc";
            goto try_except_handler_4;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[99]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 273;
            type_description_1 = "oooooocc";
            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[180];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_e);
            tmp_unicode_arg_1 = var_e;
            tmp_format_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 273;
                type_description_1 = "oooooocc";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[126];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 273;
                type_description_1 = "oooooocc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 273;
            type_description_1 = "oooooocc";
            goto try_except_handler_4;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 273;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 273;
            type_description_1 = "oooooocc";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_expression_value_14 = module_var_accessor_ui$$36$main_window$messagebox(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 274;
            type_description_1 = "oooooocc";
            goto try_except_handler_4;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[139]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 274;
            type_description_1 = "oooooocc";
            goto try_except_handler_4;
        }
        tmp_args_element_value_10 = mod_consts[140];
        tmp_tuple_element_3 = mod_consts[181];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_unicode_arg_2;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_e);
            tmp_unicode_arg_2 = var_e;
            tmp_format_value_3 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 274;
                type_description_1 = "oooooocc";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_3 = mod_consts[126];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 274;
                type_description_1 = "oooooocc";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_11 = PyUnicode_Join(mod_consts[126], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 274;
            type_description_1 = "oooooocc";
            goto try_except_handler_4;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 274;
            type_description_1 = "oooooocc";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 248;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame)) {
            frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooocc";
    goto try_except_handler_3;
    branch_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread,
        type_description_1,
        var_ip,
        var_port,
        var_firmware_path,
        var_updater,
        var_success,
        var_e,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ip);
    var_ip = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_firmware_path);
    var_firmware_path = NULL;
    Py_XDECREF(var_updater);
    var_updater = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_ip);
    var_ip = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_firmware_path);
    var_firmware_path = NULL;
    Py_XDECREF(var_updater);
    var_updater = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ui$main_window$$36$$$36$$$36$function__8_setup_logger(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *var_logger = NULL;
    PyObject *var_handler = NULL;
    PyObject *var_formatter = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger)) {
        Py_XDECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger = MAKE_FUNCTION_FRAME(tstate, code_objects_292ac5fba77d113af7703d51b88f8ff6, module_ui$main_window, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger->m_type_description == NULL);
    frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger = cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger);
    assert(Py_REFCNT(frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_ui$$36$main_window$logging(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[182]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger->m_frame.f_lineno = 286;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[183], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_logger == NULL);
        var_logger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_logger);
        tmp_expression_value_1 = var_logger;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[184]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = module_var_accessor_ui$$36$main_window$logging(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[182]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[185]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger->m_frame.f_lineno = 287;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = module_var_accessor_ui$$36$main_window$logging(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[182]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger->m_frame.f_lineno = 290;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[186]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_handler == NULL);
        var_handler = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = module_var_accessor_ui$$36$main_window$logging(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[182]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger->m_frame.f_lineno = 291;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[187],
            PyTuple_GET_ITEM(mod_consts[188], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_formatter == NULL);
        var_formatter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_handler);
        tmp_called_instance_4 = var_handler;
        CHECK_OBJECT(var_formatter);
        tmp_args_element_value_3 = var_formatter;
        frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger->m_frame.f_lineno = 292;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[189], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_logger);
        tmp_called_instance_5 = var_logger;
        CHECK_OBJECT(var_handler);
        tmp_args_element_value_4 = var_handler;
        frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger->m_frame.f_lineno = 293;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[190], tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger,
        type_description_1,
        par_name,
        var_logger,
        var_handler,
        var_formatter
    );


    // Release cached frame if used for exception.
    if (frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger == cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger);
        cache_frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger = NULL;
    }

    assertFrameObject(frame_frame_ui$main_window$$36$$$36$$$36$function__8_setup_logger);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_logger);
    tmp_return_value = var_logger;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_logger);
    Py_DECREF(var_logger);
    var_logger = NULL;
    CHECK_OBJECT(var_handler);
    Py_DECREF(var_handler);
    var_handler = NULL;
    CHECK_OBJECT(var_formatter);
    Py_DECREF(var_formatter);
    var_formatter = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_logger);
    var_logger = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
    Py_XDECREF(var_formatter);
    var_formatter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__1___init__,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        code_objects_41f75e12844bd070154324abbcd8f2ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ui$main_window,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__2_process_log_queue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__2_process_log_queue,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        code_objects_6991a6dd79d6eaed752f529594d64bb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ui$main_window,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__3__create_widgets(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__3__create_widgets,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        code_objects_82b7c0eacb5c7296a1856eeb85564b3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ui$main_window,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__4__log(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__4__log,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        code_objects_a3a18ba7ad3837c11afb4086d2c496fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ui$main_window,
        mod_consts[109],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__5__connect_bkr(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__5__connect_bkr,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        code_objects_0ce61fea68c9d0947520621054d030ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ui$main_window,
        mod_consts[117],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        code_objects_f81e298cb2e41642fd1567c1acd90bd7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ui$main_window,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__6__select_firmware(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__6__select_firmware,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        code_objects_6179ed558b9c9881e0139966b9610b2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ui$main_window,
        mod_consts[155],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__7__start_update(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__7__start_update,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        code_objects_4db452eaefcfc3abb97762cd712334e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ui$main_window,
        mod_consts[170],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        code_objects_df7ec481cfc37e5d6d6f8da2ab21c31e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ui$main_window,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__8_setup_logger(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ui$main_window$$36$$$36$$$36$function__8_setup_logger,
        mod_consts[221],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_292ac5fba77d113af7703d51b88f8ff6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ui$main_window,
        mod_consts[191],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_ui$main_window[] = {
    impl_ui$main_window$$36$$$36$$$36$function__5__connect_bkr$$36$$$36$$$36$function__1_connect_thread,
    impl_ui$main_window$$36$$$36$$$36$function__7__start_update$$36$$$36$$$36$function__1_update_thread,
    impl_ui$main_window$$36$$$36$$$36$function__1___init__,
    impl_ui$main_window$$36$$$36$$$36$function__2_process_log_queue,
    impl_ui$main_window$$36$$$36$$$36$function__3__create_widgets,
    impl_ui$main_window$$36$$$36$$$36$function__4__log,
    impl_ui$main_window$$36$$$36$$$36$function__5__connect_bkr,
    impl_ui$main_window$$36$$$36$$$36$function__6__select_firmware,
    impl_ui$main_window$$36$$$36$$$36$function__7__start_update,
    impl_ui$main_window$$36$$$36$$$36$function__8_setup_logger,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    return Nuitka_Function_GetFunctionState(function, function_table_ui$main_window);
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;
    PyObject *annotations;
    PyObject *func_dict;

    if (!PyArg_ParseTuple(args, "OOOOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, &annotations, &func_dict, NULL)) {
        return NULL;
    }

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_ui$main_window,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        annotations,
        func_dict,
        function_table_ui$main_window,
        sizeof(function_table_ui$main_window) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 0
static char const *module_full_name = "ui.main_window";
#endif

// Internal entry point for module code.
PyObject *modulecode_ui$main_window(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("ui$main_window");

    // Store the module for future use.
    module_ui$main_window = module;

    moduledict_ui$main_window = MODULE_DICT(module_ui$main_window);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule(tstate);

        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));

        createGlobalConstants(tstate, real_module_name);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("ui$main_window: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("ui$main_window: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("ui$main_window: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "ui.main_window" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initui$main_window\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_ui$main_window,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_ui$main_window,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[126]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_ui$main_window,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_ui$main_window,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_ui$main_window,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_ui$main_window);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_ui$main_window);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_frame_ui$main_window;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_2);
    }
    frame_frame_ui$main_window = MAKE_MODULE_FRAME(code_objects_5b7101810b02a64e31b1823e5e18fd2e, module_ui$main_window);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_ui$main_window);
    assert(Py_REFCNT(frame_frame_ui$main_window) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_ui$$36$main_window$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[194], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_ui$$36$main_window$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[195], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[197];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[197];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[198];
        tmp_level_value_2 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_ui$main_window,
                mod_consts[35],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[35]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_ui$main_window,
                mod_consts[142],
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[142]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_ui$main_window,
                mod_consts[138],
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[138]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_8);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[121];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 3;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[113];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 4;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[199];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[200];
        tmp_level_value_5 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_ui$main_window,
                mod_consts[149],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[149]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[18];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 6;
        tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[201];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[202];
        tmp_level_value_7 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 9;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_ui$main_window,
                mod_consts[119],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[119]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[203];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[204];
        tmp_level_value_8 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 10;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_ui$main_window,
                mod_consts[171],
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[171]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[205];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[206];
        tmp_level_value_9 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 11;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_ui$main_window,
                mod_consts[146],
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[146]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[207];
        tmp_result = DICT_SET_ITEM(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15, mod_consts[208], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[209];
        tmp_result = DICT_SET_ITEM(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15, mod_consts[210], tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__1___init__(tstate);

        tmp_result = DICT_SET_ITEM(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15, mod_consts[211], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__2_process_log_queue(tstate);

        tmp_result = DICT_SET_ITEM(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__3__create_widgets(tstate);

        tmp_result = DICT_SET_ITEM(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15, mod_consts[22], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__4__log(tstate);

        tmp_result = DICT_SET_ITEM(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15, mod_consts[99], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__5__connect_bkr(tstate);

        tmp_result = DICT_SET_ITEM(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__6__select_firmware(tstate);

        tmp_result = DICT_SET_ITEM(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__7__start_update(tstate);

        tmp_result = DICT_SET_ITEM(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15, mod_consts[93], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[209];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_ui$main_window->m_frame.f_lineno = 15;
            tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 15;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15);
        locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15);
        locals_ui$main_window$$36$$$36$$$36$class__1_MainWindow_15 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_3 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_3 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 15;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_18);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[182];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_ui$main_window;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = const_int_0;
        frame_frame_ui$main_window->m_frame.f_lineno = 280;
        tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[150];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_1;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[219];
            tmp_expression_value_1 = module_var_accessor_ui$$36$main_window$logging(tstate);
            assert(!(tmp_expression_value_1 == NULL));
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[220]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 284;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_21 = MAKE_FUNCTION_ui$main_window$$36$$$36$$$36$function__8_setup_logger(tstate, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_ui$main_window, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_21);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_ui$main_window, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_ui$main_window->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ui$main_window, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_ui$main_window);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("ui$main_window", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "ui.main_window" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_ui$main_window);
    return module_ui$main_window;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ui$main_window, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("ui$main_window", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
